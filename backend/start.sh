mkdir -p steam_client
gunicorn main:app -b 5.44.41.136:8000 --access-logfile access.log --error-logfile error.log -c gunicorn_config.py --worker-class uvicorn.workers.UvicornWorker